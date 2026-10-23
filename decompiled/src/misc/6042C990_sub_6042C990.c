/* sub_6042C990
 * address: 0x6042C990   size: 808   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_QWORD *sub_6042C990()
{
  __int64 v0; // d16
  __int64 v1; // d17

  dword_60C9C118 = (int)&sead__SafeStringBase__vtable;
  unk_60C9C11C = "u_proj";
  unk_60C9C120 = &sead__SafeStringBase__vtable;
  dword_60C9C124 = (int)"u_mv";
  dword_60C9C128 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C12C = (int)"u_it";
  dword_60C9C130 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C134 = (int)"u_mode";
  dword_60C9C138 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C13C = (int)"u_const0";
  dword_60C9C140 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C144 = (int)"u_const1";
  dword_60C9C148 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C14C = (int)"u_const2";
  dword_60C9C150 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C154 = (int)"u_light_enable";
  dword_60C9C158 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C15C = (int)"u_light_dir";
  dword_60C9C160 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C164 = (int)"u_light_ambient";
  dword_60C9C168 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C16C = (int)"u_light_diffuse";
  dword_60C9C170 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C174 = (int)"u_light_specular";
  dword_60C9C178 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C17C = (int)"u_material_ambient";
  dword_60C9C180 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C184 = (int)"u_material_diffuse";
  dword_60C9C188 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C18C = (int)"u_material_specular";
  dword_60C9C190 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C194 = (int)"u_material_specular_power";
  dword_60C9C198 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C19C = (int)"u_material_specular_mode";
  dword_60C9C1A0 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C1A4 = (int)"u_rim_color";
  dword_60C9C1A8 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C1AC = (int)"u_rim_power";
  dword_60C9C1B0 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C1B4 = (int)"u_specular_mask";
  dword_60C9C1B8 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C1BC = (int)"u_is_face_mask";
  dword_60C9C1C0 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C1C4 = (int)"u_is_face_line";
  dword_60C9C1C8 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C1CC = (int)"u_ex_light_reg_color";
  dword_60C9C1D0 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C1D4 = (int)"u_ex_dark_reg_color";
  dword_60C9C1D8 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C1DC = (int)"u_lightmap_enable";
  dword_60C9C1E0 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C1E4 = (int)"u_fog_color";
  dword_60C9C1E8 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C1EC = (int)"u_fog_start";
  dword_60C9C1F0 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C1F4 = (int)"u_fog_start_end_inv";
  dword_60C9C1F8 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C1FC = (int)"u_fog_dir";
  sub_60000288();
  dword_60C9C29C = (int)&sead__SafeStringBase__vtable;
  dword_60C9C2A0 = (int)"s_texture";
  dword_60C9C2A4 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C2A8 = (int)"s_lightmap_01p";
  dword_60C9C2AC = (int)&sead__SafeStringBase__vtable;
  dword_60C9C2B0 = (int)"s_lightmap_02p";
  sub_60000288();
  dword_60C9C2B4 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C2B8 = (int)"a_position";
  dword_60C9C2BC = (int)&sead__SafeStringBase__vtable;
  dword_60C9C2C0 = (int)"a_texCoord";
  dword_60C9C2C4 = (int)&sead__SafeStringBase__vtable;
  dword_60C9C2C8 = (int)"a_normal";
  sub_60000288();
  dword_60C9C290 = 0;
  dword_60C9C294 = 0;
  *(float *)&v0 = 1.0;
  *((float *)&v0 + 1) = 1.0;
  *(float *)&v1 = 1.0;
  *((float *)&v1 + 1) = 1.0;
  dword_60C9C298 = 1065353216;
  unk_60C9C200 = v0;
  unk_60C9C208 = v1;
  unk_60C9C210 = v0;
  unk_60C9C218 = v1;
  unk_60C9C220 = v0;
  unk_60C9C228 = v1;
  unk_60C9C230 = 0x3E4CCCCD3E4CCCCDLL;
  *(_QWORD *)&dword_60C9C238 = 0x3F8000003E4CCCCDLL;
  unk_60C9C240 = 0x3F4CCCCD3F4CCCCDLL;
  *(_QWORD *)&dword_60C9C248 = 0x3F8000003F4CCCCDLL;
  unk_60C9C250 = 0;
  *(_QWORD *)&dword_60C9C258 = 0;
  unk_60C9C260 = 0;
  unk_60C9C268 = 0;
  qword_60C9C270 = 0x3F8000003F800000LL;
  unk_60C9C278 = 1065353216;
  return &qword_60C9C270;
}
