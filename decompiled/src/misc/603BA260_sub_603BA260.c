/* sub_603BA260
 * address: 0x603BA260   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_603BA260(int a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // r12
  int v5; // r1
  float v6; // s0
  float *v7; // r3
  int v8; // s0
  float v9; // s2
  float *v10; // r0
  int v11; // s2
  ActiveCollider *v12; // r4
  ActiveColliderMgr *v13; // r5
  ActiveColliderMgr *result; // r0
  int v15; // [sp+0h] [bp-18h] BYREF
  _DWORD v16[5]; // [sp+4h] [bp-14h] BYREF

  Enemy__vf26C((Enemy *)a1);
  if ( FIELD_U8(a1, 22576) )
  {
    v2 = FIELD_U32(a1, 6480);
    FIELD_U32(a1, 6452) = FIELD_U32(a1, 6476);
    FIELD_U32(a1, 6456) = v2;
  }
  else
  {
    v3 = FIELD_U32(a1, 108);
    v4 = FIELD_U32(a1, 112);
    v16[0] = v3;
    v15 = v4;
    v5 = FIELD_U32(a1, 22544);
    v6 = -7.0;
    v7 = (float *)&v15;
    switch ( v5 )
    {
      case 0:
        goto LABEL_8;
      case 1:
        v6 = 7.0;
        goto LABEL_5;
      case 2:
        v6 = 7.0;
        goto LABEL_8;
      case 3:
LABEL_5:
        v7 = (float *)v16;
LABEL_8:
        *v7 = v6 + *v7;
        v8 = v16[0];
        break;
      default:
        v8 = v3;
        break;
    }
    v16[0] = v3;
    v15 = v4;
    v9 = -7.0;
    v10 = (float *)&v15;
    switch ( v5 )
    {
      case 0:
        goto LABEL_14;
      case 1:
        v9 = 7.0;
        goto LABEL_11;
      case 2:
        v9 = 7.0;
        goto LABEL_14;
      case 3:
LABEL_11:
        v10 = (float *)v16;
LABEL_14:
        *v10 = v9 + *v10;
        v11 = v15;
        break;
      default:
        v11 = v4;
        break;
    }
    FIELD_U32(a1, 6452) = v8;
    FIELD_U32(a1, 6456) = v11;
  }
  FIELD_U8(a1, 6460) = 1;
  v12 = (ActiveCollider *)(a1 + 22780);
  v13 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v12);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v13, v12);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v13, v12);
  }
  return result;
}
