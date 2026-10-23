/* sub_603336A4
 * address: 0x603336A4   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603336A4(int a1)
{
  float v2; // s0
  float v3; // s2
  int v4; // r0
  int result; // r0
  unsigned __int8 *v6; // r5
  _BYTE *v7; // r6
  float v8; // r2
  int v9; // r0
  int v10; // r2
  float v11; // r2
  int v12; // [sp+4h] [bp-24h] BYREF
  float v13; // [sp+8h] [bp-20h]
  int v14; // [sp+Ch] [bp-1Ch]
  int v15; // [sp+10h] [bp-18h] BYREF
  char v16; // [sp+14h] [bp-14h] BYREF

  v2 = FIELD_F32(a1, 576);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_U32(a1, 116);
  v12 = FIELD_U32(a1, 108);
  v13 = v3 + v2;
  v14 = v4;
  ((void (__fastcall *)(int *, char *, int *, _DWORD))checkLiquidCollisions)(
    &v15,
    &v16,
    &v12,
    FIELD_U8(a1, 86));
  result = v15;
  if ( v15 )
  {
    if ( v15 != 5 )
      return result;
    FIELD_U8(a1, 7005) = 1;
    v6 = (unsigned __int8 *)(a1 + 7005);
    v7 = (_BYTE *)(a1 + 7006);
    if ( FIELD_U8(a1, 7006) != 1 )
    {
      v8 = FIELD_F32(a1, 112);
      v9 = TileMgr_instance;
      v12 = FIELD_U32(a1, 108);
      v13 = v8;
      v10 = 23;
LABEL_7:
      TileMgr_splashRelated(v9, &v12, v10);
    }
  }
  else
  {
    FIELD_U8(a1, 7005) = 0;
    v6 = (unsigned __int8 *)(a1 + 7005);
    v7 = (_BYTE *)(a1 + 7006);
    if ( FIELD_U8(a1, 7006) )
    {
      v11 = FIELD_F32(a1, 112);
      v9 = TileMgr_instance;
      v12 = FIELD_U32(a1, 108);
      v13 = v11;
      v10 = 24;
      goto LABEL_7;
    }
  }
  result = *v6;
  *v7 = result;
  return result;
}
