/* SpinningStar_onExecute_helper
 * address: 0x60673344   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int16 *__fastcall SpinningStar_onExecute_helper(int a1)
{
  __int16 v1; // r2
  _WORD *v2; // lr
  __int16 *result; // r0
  float *v4; // r12
  __int16 v5; // r1
  int v6; // r3
  int v7; // r4
  bool v8; // zf
  int v9; // r4
  int v10; // r5
  bool v11; // zf
  float v12; // s2
  int v13; // r5
  bool v14; // zf
  float v15; // s2
  int v16; // r1
  bool v17; // zf

  v1 = 0;
  FIELD_U16(a1, 7610) = 0;
  v2 = (_WORD *)(a1 + 7610);
  FIELD_U16(a1, 7612) = 0;
  result = (__int16 *)(a1 + 7612);
  v4 = (float *)(result - 748);
  v5 = *(result - 2);
  v6 = PlayerMgr_instance;
  if ( (v5 & 1) != 0 )
  {
    v7 = FIELD_U8(PlayerMgr_instance, 66);
    v8 = (v7 & 1) == 0;
    if ( (v7 & 1) != 0 )
    {
      v7 = FIELD_U32(PlayerMgr_instance, 48);
      v8 = v7 == 0;
    }
    if ( !v8 )
    {
      if ( FIELD_F32(v7, 108) < *v4 )
      {
        v9 = 1;
        *v2 = 1;
        if ( (v5 & 2) == 0 )
          goto LABEL_19;
        goto LABEL_10;
      }
      v1 = 1;
      *result = 1;
    }
  }
  v9 = 0;
  if ( (v5 & 2) == 0 )
    goto LABEL_19;
LABEL_10:
  v10 = FIELD_U8(v6, 66);
  v11 = (v10 & 2) == 0;
  if ( (v10 & 2) != 0 )
  {
    v10 = FIELD_U32(v6, 52);
    v11 = v10 == 0;
  }
  if ( !v11 )
  {
    v12 = FIELD_F32(v10, 108);
    if ( v12 >= *v4 )
      v1 |= 2u;
    else
      v9 |= 2u;
    if ( v12 >= *v4 )
      *result = v1;
    else
      *v2 = v9;
  }
LABEL_19:
  if ( (v5 & 4) != 0 )
  {
    v13 = FIELD_U8(v6, 66);
    v14 = (v13 & 4) == 0;
    if ( (v13 & 4) != 0 )
    {
      v13 = FIELD_U32(v6, 56);
      v14 = v13 == 0;
    }
    if ( !v14 )
    {
      v15 = FIELD_F32(v13, 108);
      if ( v15 >= *v4 )
        v1 |= 4u;
      else
        v9 |= 4u;
      if ( v15 >= *v4 )
        *result = v1;
      else
        *v2 = v9;
    }
  }
  if ( (v5 & 8) != 0 )
  {
    v16 = FIELD_U8(v6, 66);
    v17 = (v16 & 8) == 0;
    if ( (v16 & 8) != 0 )
    {
      v16 = FIELD_U32(v6, 60);
      v17 = v16 == 0;
    }
    if ( !v17 )
    {
      if ( FIELD_F32(v16, 108) >= *v4 )
      {
        *result = v1 | 8;
      }
      else
      {
        result = (__int16 *)(v9 | 8);
        *v2 = v9 | 8;
      }
    }
  }
  return result;
}
