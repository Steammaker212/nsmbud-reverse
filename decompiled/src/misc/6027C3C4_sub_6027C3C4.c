/* sub_6027C3C4
 * address: 0x6027C3C4   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6027C3C4(int a1)
{
  float v2; // s0
  int result; // r0
  int v4; // r3
  bool v5; // zf
  float v6; // s2
  float v7; // s2
  int v8; // r3
  bool v9; // zf
  float v10; // s2
  float v11; // s2
  int v12; // r3
  bool v13; // zf
  float v14; // s2
  float v15; // s2
  int v16; // r3
  bool v17; // zf
  float v18; // s2

  v2 = 10000000.0;
  result = -1;
  v4 = FIELD_U32(PlayerMgr_instance, 32);
  v5 = v4 == 0;
  if ( v4 )
    v5 = (FIELD_U8(PlayerMgr_instance, 66) & 1) == 0;
  if ( !v5 )
  {
    v6 = FIELD_F32(v4, 108) - FIELD_F32(a1, 108);
    if ( FIELD_U32(a1, 80) )
    {
      if ( v6 > 0.0 )
        goto LABEL_10;
    }
    else if ( v6 < 0.0 )
    {
      goto LABEL_10;
    }
    v2 = 10000000.0;
    v7 = fabsf(v6);
    if ( v7 < 10000000.0 )
    {
      result = FIELD_S8(v4, 84);
      v2 = v7;
    }
  }
LABEL_10:
  v8 = FIELD_U32(PlayerMgr_instance, 36);
  v9 = v8 == 0;
  if ( v8 )
    v9 = (FIELD_U8(PlayerMgr_instance, 66) & 2) == 0;
  if ( !v9 )
  {
    v10 = FIELD_F32(v8, 108) - FIELD_F32(a1, 108);
    if ( FIELD_U32(a1, 80) )
    {
      if ( v10 > 0.0 )
        goto LABEL_19;
    }
    else if ( v10 < 0.0 )
    {
      goto LABEL_19;
    }
    v11 = fabsf(v10);
    if ( v11 < v2 )
    {
      result = FIELD_S8(v8, 84);
      v2 = v11;
    }
  }
LABEL_19:
  v12 = FIELD_U32(PlayerMgr_instance, 40);
  v13 = v12 == 0;
  if ( v12 )
    v13 = (FIELD_U8(PlayerMgr_instance, 66) & 4) == 0;
  if ( !v13 )
  {
    v14 = FIELD_F32(v12, 108) - FIELD_F32(a1, 108);
    if ( FIELD_U32(a1, 80) )
    {
      if ( v14 > 0.0 )
        goto LABEL_28;
    }
    else if ( v14 < 0.0 )
    {
      goto LABEL_28;
    }
    v15 = fabsf(v14);
    if ( v15 < v2 )
    {
      result = FIELD_S8(v12, 84);
      v2 = v15;
    }
  }
LABEL_28:
  v16 = FIELD_U32(PlayerMgr_instance, 44);
  v17 = v16 == 0;
  if ( v16 )
    v17 = (FIELD_U8(PlayerMgr_instance, 66) & 8) == 0;
  if ( !v17 )
  {
    v18 = FIELD_F32(v16, 108) - FIELD_F32(a1, 108);
    if ( FIELD_U32(a1, 80) )
    {
      if ( v18 > 0.0 )
        return result;
    }
    else if ( v18 < 0.0 )
    {
      return result;
    }
    if ( fabsf(v18) < v2 )
      return FIELD_S8(v16, 84);
  }
  return result;
}
