/* sub_600E7A1C
 * address: 0x600E7A1C   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_600E7A1C(_DWORD *a1)
{
  _DWORD *v1; // r4
  signed int v2; // r0
  int v3; // r5
  _DWORD *v4; // r5
  int v5; // r0
  int (__fastcall *v6)(int, int (***)()); // r2
  int v7; // r0
  int (__fastcall *v8)(int, int (***)()); // r2
  float v9; // s2
  int (**v11)(); // [sp+0h] [bp-18h] BYREF
  const char *v12; // [sp+4h] [bp-14h]

  v1 = a1;
  a1[29] = -988004352;
  a1[36] = 1067869798;
  a1[37] = 1067869798;
  a1[38] = 1067869798;
  a1[123] = 0;
  a1[124] = 1103101952;
  a1[125] = 1111490560;
  a1[126] = 1111490560;
  a1[143] = 0;
  a1[144] = 1098907648;
  a1[145] = 0;
  v2 = StageActor__directionToPlayerX((StateActor *)v1, (Vec3 *)v1 + 9);
  v1[20] = v2;
  v3 = byte_60AFE3F4[v2];
  v1[40] = (*(int (__fastcall **)(_DWORD *))(*v1 + 1216))(v1) * v3;
  v1[1873] = -1021509632;
  v4 = v1 + 1873;
  v1[1872] = 1125974016;
  v1 += 1872;
  *(v1 - 96) = &dword_60C852C0;
  *(v1 - 95) = &dword_60C85370;
  *(v1 - 94) = &dword_60C852D0;
  *(v1 - 93) = &dword_60C852F8;
  *(v1 - 92) = &unk_60C85330;
  v1[78] = &unk_60AF5EA0;
  v1[157] = &dword_60C853C0;
  v5 = *(_DWORD *)*(v1 - 97);
  v6 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v5 + 84);
  v11 = &sead__SafeStringBase__vtable;
  v12 = "ludwig_shell_model";
  v1[71] = v6(v5, &v11);
  v7 = *(_DWORD *)*(v1 - 98);
  v8 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v7 + 84);
  v11 = &sead__SafeStringBase__vtable;
  v12 = "ludwig_all_root";
  v1[70] = v8(v7, &v11);
  *v1 = 1125122048;
  *v4 = -1022361600;
  v9 = FIELD_F32(dword_60CC6484, 116);
  *((float *)v1 + 171) = v9 + -112.0;
  *((float *)v1 + 172) = v9;
  *((float *)v1 + 173) = v9 + 112.0;
  return v9 + -112.0;
}
