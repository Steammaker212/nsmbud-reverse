/* sub_6082E11C
 * address: 0x6082E11C   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6082E11C(int a1)
{
  int *v2; // r0
  _DWORD *v3; // r1
  __int16 v4; // r2
  bool v5; // zf
  bool v6; // zf
  bool v7; // zf
  bool v8; // zf
  float v10; // s2
  float v11; // s0
  float v12; // s0
  float v13; // s2
  float v14; // s2
  float v15; // s0
  float v16; // s0
  float v17; // s2
  float v18; // s2
  float v19; // s0
  float v20; // s0
  float v21; // s2
  float v22; // s2
  float v23; // s0
  float v24; // s0
  float v25; // s2

  v2 = &PlayerMgr_instance;
  v3 = (_DWORD *)PlayerMgr_instance;
  v4 = FIELD_U16(PlayerMgr_instance, 66);
  v5 = (v4 & 1) == 0;
  if ( (v4 & 1) != 0 )
  {
    v2 = *(int **)(PlayerMgr_instance + 32);
    v5 = v2 == 0;
  }
  if ( !v5 )
  {
    v10 = FIELD_F32(a1, 108);
    v11 = *((float *)v2 + 27);
    if ( v10 <= v11 && v11 <= (float)(v10 + 16.0) )
    {
      v12 = *((float *)v2 + 28);
      v13 = FIELD_F32(a1, 112);
      if ( v13 <= v12 && v12 <= (float)(v13 + 64.0) )
      {
        sub_607973A0((int)v2);
        v2 = &PlayerMgr_instance;
        v3 = (_DWORD *)PlayerMgr_instance;
        v4 = FIELD_U16(PlayerMgr_instance, 66);
      }
    }
  }
  v6 = (v4 & 2) == 0;
  if ( (v4 & 2) != 0 )
  {
    v2 = (int *)v3[9];
    v6 = v2 == 0;
  }
  if ( !v6 )
  {
    v14 = FIELD_F32(a1, 108);
    v15 = *((float *)v2 + 27);
    if ( v14 <= v15 && v15 <= (float)(v14 + 16.0) )
    {
      v16 = *((float *)v2 + 28);
      v17 = FIELD_F32(a1, 112);
      if ( v17 <= v16 && v16 <= (float)(v17 + 64.0) )
      {
        sub_607973A0((int)v2);
        v2 = &PlayerMgr_instance;
        v3 = (_DWORD *)PlayerMgr_instance;
        v4 = FIELD_U16(PlayerMgr_instance, 66);
      }
    }
  }
  v7 = (v4 & 4) == 0;
  if ( (v4 & 4) != 0 )
  {
    v2 = (int *)v3[10];
    v7 = v2 == 0;
  }
  if ( !v7 )
  {
    v18 = FIELD_F32(a1, 108);
    v19 = *((float *)v2 + 27);
    if ( v18 <= v19 && v19 <= (float)(v18 + 16.0) )
    {
      v20 = *((float *)v2 + 28);
      v21 = FIELD_F32(a1, 112);
      if ( v21 <= v20 && v20 <= (float)(v21 + 64.0) )
      {
        sub_607973A0((int)v2);
        v2 = &PlayerMgr_instance;
        v3 = (_DWORD *)PlayerMgr_instance;
        v4 = FIELD_U16(PlayerMgr_instance, 66);
      }
    }
  }
  v8 = (v4 & 8) == 0;
  if ( (v4 & 8) != 0 )
  {
    v2 = (int *)v3[11];
    v8 = v2 == 0;
  }
  if ( v8 )
    return 1;
  v22 = FIELD_F32(a1, 108);
  v23 = *((float *)v2 + 27);
  if ( v22 > v23 )
    return 1;
  if ( v23 > (float)(v22 + 16.0) )
    return 1;
  v24 = *((float *)v2 + 28);
  v25 = FIELD_F32(a1, 112);
  if ( v25 > v24 || v24 > (float)(v25 + 64.0) )
    return 1;
  sub_607973A0((int)v2);
  return 1;
}
