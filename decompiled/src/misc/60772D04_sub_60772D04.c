/* sub_60772D04
 * address: 0x60772D04   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60772D04(int a1, int a2)
{
  int v4; // r6
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  bool v10; // zf
  int v11; // r0
  bool v12; // zf
  int v13; // r1
  int v14; // r1

  v4 = a1 + 688;
  v5 = sub_60786750(a1 + 688);
  v6 = v5 == 1;
  if ( v5 == 1 )
    v6 = FIELD_U32(a1, 80) == 0;
  if ( v6 )
  {
    v14 = 0;
    if ( FIELD_F32(a1, 88) > 0.0 )
      goto LABEL_19;
  }
  v7 = sub_6078675C(v4);
  v8 = v7 == 1;
  if ( v7 == 1 )
    v8 = FIELD_U32(a1, 80) == 1;
  if ( v8 && (v14 = 1, FIELD_F32(a1, 88) < 0.0) )
  {
LABEL_19:
    FIELD_U32(a1, 160) = sub_60773F3C(a1, v14);
    FIELD_U32(a1, 80) ^= 1u;
    return Player_changeState(a1, &stru_60CBF918, 0);
  }
  else
  {
    v9 = sub_60786750(v4);
    v10 = v9 == 1;
    if ( v9 == 1 )
      v10 = FIELD_U32(a1, 80) == 0;
    if ( v10 )
    {
      v13 = 0;
      if ( FIELD_F32(a1, 88) < 0.0 )
        goto LABEL_22;
    }
    v11 = sub_6078675C(v4);
    v12 = v11 == 1;
    if ( v11 == 1 )
      v12 = FIELD_U32(a1, 80) == 1;
    if ( v12 )
    {
      v13 = 1;
      if ( FIELD_F32(a1, 88) > 0.0 )
      {
LABEL_22:
        FIELD_U32(a1, 160) = sub_60773F3C(a1, v13);
        FIELD_U32(a1, 80) ^= 1u;
      }
    }
    return Player_changeState(a1, &stru_60CBF81C, a2);
  }
}
