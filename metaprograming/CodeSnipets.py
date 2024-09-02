def rvec(t: str) -> str:
    return f"ROOT::VecOps::RVec<{t}>"

def momentum_property(inst_name: str, p_m_name: str, prop_name: str, var_name:str) -> str:
    return (f"ROOT::Math::PxPyPzMVector p{var_name}({inst_name}.{p_m_name}.x, {inst_name}.{p_m_name}.y, {inst_name}.{p_m_name}.z, {inst_name}.mass);\n"
            f"{var_name} = p{var_name}.{prop_name}();\n")

def vertex_property(inst_name: str, r_m_name: str, prop_name: str, var_name:str) -> str:
    return (f"ROOT::Math::XYZVector r{var_name}({inst_name}.{r_m_name}.x, {inst_name}.{r_m_name}.y, {inst_name}.{r_m_name}.z);\n"
            f"{var_name} = r{var_name}.{prop_name}();\n")

def obj_member(inst_name: str, obj_mem: str, var_name:str, aux_func: str = "") -> str:
    return f"{var_name} = {aux_func}({inst_name}.{obj_mem});\n"
