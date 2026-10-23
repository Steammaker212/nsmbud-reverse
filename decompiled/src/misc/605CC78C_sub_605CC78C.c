/* sub_605CC78C
 * address: 0x605CC78C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605CC78C(int a1, float *a2)
{
  int v3; // r1
  int v4; // r5
  float result; // s0
  float *v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r0
  float v10; // s4
  float v11; // s6

  if ( (FIELD_U8(a1, 6124) & 4) == 0 )
    goto LABEL_9;
  v3 = FIELD_S8(a1, 84);
  if ( (unsigned __int8)v3 == 255 )
    goto LABEL_9;
  if ( (unsigned __int8)v3 >= 4u )
    v3 = 0;
  v4 = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 32);
  if ( !v4 || (FIELD_U8(v4, 1205) & 0x40) != 0 )
  {
LABEL_9:
    v7 = FIELD_U32(a1, 108);
    v8 = FIELD_U32(a1, 112);
    v9 = FIELD_U32(a1, 116);
    *(_DWORD *)a2 = v7;
    *((_DWORD *)a2 + 1) = v8;
    *((_DWORD *)a2 + 2) = v9;
    return result;
  }
  sub_6079D4B0(v4, a2);
  if ( sub_6075EDF8(v4) == 1 )
  {
    v6 = (float *)&unk_60B0AFD8;
  }
  else
  {
    if ( FIELD_U32(v4, 1320) != 9 )
      return result;
    v6 = (float *)&unk_60B0B02C;
  }
  v10 = v6[1];
  v11 = v6[2];
  *a2 = *v6 + *a2;
  a2[1] = v10 + a2[1];
  result = v11 + a2[2];
  a2[2] = result;
  return result;
}
