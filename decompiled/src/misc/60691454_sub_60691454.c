/* sub_60691454
 * address: 0x60691454   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60691454(int a1)
{
  int v2; // r0
  float v3; // s0
  float result; // s0
  float v5; // s0
  int v6; // [sp+4h] [bp-1Ch] BYREF
  int v7; // [sp+8h] [bp-18h]
  int v8; // [sp+Ch] [bp-14h]

  v2 = FIELD_U32(a1, 116);
  v6 = 1151276376;
  v7 = -1002332160;
  v8 = v2;
  v3 = sub_608332CC(a1 + 108, &v6, 0.5, 0.85, 0.0);
  if ( v3 >= 0.5 )
  {
    v5 = (float)(FIELD_F32(a1, 6168) - v3) / FIELD_F32(a1, 6168);
    LODWORD(result) = (int)(float)((float)(2147500000.0
                                         * (float)((float)(v5 * (float)((float)(180.0 * -775480000.0) / 2147500000.0))
                                                 + (float)((float)((float)(180.0 * 59652000.0) / 2147500000.0)
                                                         * (float)(1.0 - v5))))
                                 / 180.0);
    FIELD_F32(a1, 164) = result;
    FIELD_F32(a1, 6136) = result;
  }
  else
  {
    FIELD_U32(a1, 108) = v6;
    FIELD_U32(a1, 112) = v7;
    FIELD_U32(a1, 116) = v8;
    FIELD_U32(a1, 164) = -775480206;
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB90A8);
  }
  return result;
}
