/* G_Score_00_ref
 * address: 0x604C8A34   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall G_Score_00_ref(int a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r6
  int v5; // r0
  float v6; // s16
  int v7; // r0
  unsigned int v8; // r0
  int v9; // r4
  int v11; // [sp+4h] [bp-24h] BYREF
  const char *v12; // [sp+8h] [bp-20h]
  _DWORD v13[7]; // [sp+Ch] [bp-1Ch] BYREF

  FIELD_U32(a1, 615712) = 0;
  FIELD_U8(a1, 20241) = 1;
  if ( FIELD_U8(a1, 615721) )
  {
    v2 = FIELD_U32(a1, 56);
    v3 = sub_604DABE0(3);
    v4 = sub_60980A54(v2, v3);
    v11 = (int)&sead__SafeStringBase__vtable;
    v12 = "G_Score_00";
    v5 = sub_60474EBC(a1 + 40, &v11);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v4 + 60))(v4, v5);
    v6 = 1.0;
  }
  else
  {
    v6 = 0.0;
  }
  v7 = sub_604DABE0(0);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = (const char *)v7;
  sub_60473DE4((_DWORD *)(a1 + 40), 0, &v11, 0);
  sub_6047455C(a1 + 40, 0, v6);
  sub_6047459C(a1 + 40, 0);
  if ( FIELD_U32(a1, 21860) == -1 )
    G_PlayerNum_00_ref_4D1C04(a1);
  else
    CourseSelectVS_Score_00_ref(a1);
  v8 = FIELD_U32(a1, 615700);
  if ( v8 >= 0xA )
    v8 = 0;
  ((void (__fastcall *)(unsigned int, _DWORD))loc_604D23A8)(a1 + 52644 * v8 + 89248, 0);
  FIELD_U8(a1, 615733) = 1;
  FIELD_U8(a1, 615732) = 1;
  FIELD_U8(a1, 615735) = 1;
  FIELD_U8(a1, 615734) = 1;
  sub_604D3944(a1);
  FIELD_U8(a1, 4854) = 0;
  v11 = 0;
  v13[0] = 0;
  v9 = a1 + 3800;
  sub_60502B04(v9, v13, 1);
  v11 = 1;
  v13[0] = 1;
  sub_60502B04(v9, v13, 1);
  v11 = 2;
  v13[0] = 2;
  sub_60502B04(v9, v13, 1);
  v11 = 3;
  v13[0] = 3;
  return sub_60502B04(v9, v13, 1);
}
