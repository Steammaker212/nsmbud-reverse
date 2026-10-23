/* sub_6063EA98
 * address: 0x6063EA98   size: 816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6063EA98(int a1)
{
  signed int result; // r0
  int v3; // r1
  int v4; // r2
  unsigned int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  int *v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r1
  int v12; // r2
  int v13; // r1
  int v14; // r2
  int *v15; // r1
  int v16; // r5
  SolidOnTopColliderInfo v17; // [sp+0h] [bp-48h] BYREF
  _DWORD v18[12]; // [sp+18h] [bp-30h] BYREF

  if ( FIELD_U32(dword_60C99DD4, 764) == 4 )
  {
    result = 2;
    if ( (unsigned __int8)(FIELD_U8(dword_60C9A1F0, 6559) - 1) < 3u )
      return result;
  }
  FIELD_U32(a1, 116) = 1139146752;
  v3 = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6124) = v3;
  v4 = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6128) = v4;
  FIELD_U32(a1, 6112) = v3;
  FIELD_U32(a1, 6116) = v4;
  FIELD_U32(a1, 6120) = 1139146752;
  FIELD_U32(a1, 6132) = 1137836032;
  FIELD_U32(a1, 6136) = 1065353216;
  FIELD_U32(a1, 6140) = 1065353216;
  FIELD_U32(a1, 6144) = 1065353216;
  FIELD_U32(a1, 6148) = 1065353216;
  FIELD_U32(a1, 6152) = 1065353216;
  FIELD_U32(a1, 6156) = 1065353216;
  v5 = FIELD_U32(a1, 20);
  if ( (v5 & 0x10) != 0 )
    FIELD_U32(a1, 6228) = 1065353216;
  FIELD_U32(a1, 6236) = 0;
  v6 = v5 & 7;
  FIELD_U32(a1, 6204) = v6;
  FIELD_U32(a1, 6224) = (v5 >> 8) & 3;
  v7 = 178913280;
  if ( v6 <= 4 && ((1 << v6) & 0x15) != 0 )
  {
    FIELD_U32(a1, 80) = 1;
    FIELD_U32(a1, 160) = 0x80000000;
    if ( v6 == 4 )
    {
      FIELD_U32(a1, 164) = 178913280;
    }
    else if ( v6 == 2 )
    {
      FIELD_U32(a1, 164) = 357826560;
    }
    v8 = (int *)(a1 + 156);
    v9 = FIELD_U32(a1, 156);
    v10 = FIELD_U32(a1, 160);
    FIELD_U32(a1, 6264) = FIELD_U32(a1, 164);
    FIELD_U32(a1, 6260) = v10;
    FIELD_U32(a1, 6256) = v9;
    FIELD_U32(a1, 6260) = 0;
    goto LABEL_18;
  }
  FIELD_U32(a1, 80) = 0;
  if ( v6 == 5 )
    goto LABEL_16;
  if ( v6 == 3 )
  {
    v7 = 357826560;
LABEL_16:
    FIELD_U32(a1, 164) = v7;
  }
  v8 = (int *)(a1 + 156);
  v11 = FIELD_U32(a1, 156);
  v12 = FIELD_U32(a1, 160);
  FIELD_U32(a1, 6264) = FIELD_U32(a1, 164);
  FIELD_U32(a1, 6260) = v12;
  FIELD_U32(a1, 6256) = v11;
LABEL_18:
  v13 = *v8;
  v14 = v8[1];
  FIELD_U32(a1, 6276) = v8[2];
  FIELD_U32(a1, 6272) = v14;
  FIELD_U32(a1, 6268) = v13;
  FIELD_U32(a1, 6268) = 402653184;
  sub_6063EDE0(a1);
  FIELD_U8(a1, 6160) = (FIELD_U32(a1, 24) & 0x10000000) != 0;
  memset(&v17, 0, 16);
  v17.points = (Vec2 *)v18;
  memset(v18, 0, 32);
  v17.rotation = 0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6344), (StageActor *)a1, &v17);
  sub_60160630((ColliderBase *)(a1 + 6344), 2);
  ColliderBase_setSurfaceType((ColliderBase *)(a1 + 6344), 12);
  FIELD_U32(a1, 6656) = sub_606408A8;
  if ( (FIELD_U8(a1, 27) & 0x10) != 0 )
    v15 = (int *)&unk_60CB5790;
  else
    v15 = &dword_60CB5730;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v15);
  v16 = **(_DWORD **)(a1 + 6108);
  FIELD_U32(a1, 6284) = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v16 + 84))(v16, &dword_60CB58A4);
  FIELD_U32(a1, 6288) = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v16 + 84))(v16, &dword_60CB58AC);
  FIELD_U32(a1, 6292) = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v16 + 84))(v16, &dword_60CB58B4);
  skl_root_ref_63F258(a1);
  return 1;
}
