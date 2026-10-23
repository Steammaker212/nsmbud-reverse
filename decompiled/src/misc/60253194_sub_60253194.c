/* sub_60253194
 * address: 0x60253194   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60253194(int a1, int a2)
{
  int v3; // r6
  int v4; // r0
  _DWORD *v5; // r7
  int v6; // r5
  unsigned int v7; // r5
  unsigned int v8; // r5
  int result; // r0
  int v10; // r0
  unsigned int *v11; // r1
  _BOOL4 v12; // r3
  int v13; // r2
  _DWORD *v14; // r2
  int v15; // r6

  v3 = a2 + 688;
  v5 = (_DWORD *)(a1 + 6340);
  v4 = FIELD_U32(a1, 6340);
  if ( v4 )
    *v5 = v4 - 1;
  v6 = sub_60786860(a2 + 688);
  if ( v6 )
    v6 = 8;
  v7 = v6 & 0xFFFFFFFB | (4 * (sub_6078686C(v3) & 1));
  v8 = v7 & 0xFFFFFFFD | (2 * (sub_60786878(v3) & 1));
  if ( sub_60786884(v3) )
    v8 |= 1u;
  if ( sub_60786670(v3) )
    v8 |= 0x10u;
  if ( sub_6078663C(v3) )
    v8 |= 0x20u;
  if ( *v5 == 1 )
  {
    FIELD_U32(a1, 6324) = 0;
    FIELD_U32(a1, 6328) = 0;
    FIELD_U32(a1, 6336) = 0;
    *v5 = 0;
    return 0;
  }
  if ( !v8 )
    return 0;
  v11 = (unsigned int *)(a1 + 6332);
  v10 = FIELD_U32(a1, 6332);
  if ( !v10 )
    *v5 = (int)FIELD_F32(a1, 6384);
  v12 = 0;
  if ( (v8 & 0x20) != 0 )
  {
    FIELD_U32(a1, 6324) = v8;
    v13 = FIELD_U32(a1, 6328) + 1;
    FIELD_U32(a1, 6328) = v13;
    v12 = v13 >= (int)(float)(FIELD_F32(a1, 6392) + 1.0);
  }
  if ( (v10 & v8) != 0 )
  {
    if ( v12 )
    {
      v14 = (_DWORD *)(a1 + 6336);
LABEL_24:
      FIELD_U32(a1, 6328) = 0;
      FIELD_U32(a1, 6324) = 0;
      *v14 = 0;
      *v11 = 0;
      *v5 = 0;
      return 1;
    }
    return 0;
  }
  *v11 = v8;
  v14 = (_DWORD *)(a1 + 6336);
  v15 = FIELD_U32(a1, 6336) + 1;
  FIELD_U32(a1, 6336) = v15;
  if ( v12 )
    goto LABEL_24;
  result = 0;
  if ( v15 >= (int)(float)(FIELD_F32(a1, 6388) + 1.0) )
    goto LABEL_24;
  return result;
}
