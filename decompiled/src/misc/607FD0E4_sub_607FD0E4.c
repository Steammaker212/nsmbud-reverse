/* sub_607FD0E4
 * address: 0x607FD0E4   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FD0E4(int *a1, int a2)
{
  int result; // r0
  int v4; // r3
  float v5; // s0
  float v6; // s2
  float v7; // s0
  float v8; // s2

  result = 0;
  if ( *((_BYTE *)a1 + 39) || *((unsigned __int8 *)a1 + 29) != FIELD_U8(a2, 29) )
    return result;
  v4 = *a1;
  if ( !*a1 )
  {
    v5 = FIELD_F32(a2, 8);
    v6 = *((float *)a1 + 2);
    goto LABEL_8;
  }
  if ( v4 == 2 )
  {
    v7 = FIELD_F32(a2, 12);
    v8 = *((float *)a1 + 3);
  }
  else
  {
    if ( v4 == 1 )
    {
      v5 = FIELD_F32(a2, 4);
      v6 = *((float *)a1 + 1);
LABEL_8:
      if ( v6 != v5 )
        return result;
      if ( *((float *)a1 + 3) == -3.4028e38 && FIELD_F32(a2, 16) == 3.4028e38 )
      {
        a1[3] = FIELD_U32(a2, 12);
LABEL_24:
        *((_BYTE *)a1 + 39) = 1;
        return 1;
      }
      if ( *((float *)a1 + 4) == 3.4028e38 && FIELD_F32(a2, 12) == -3.4028e38 )
      {
        a1[4] = FIELD_U32(a2, 16);
        goto LABEL_24;
      }
      return result;
    }
    v7 = FIELD_F32(a2, 16);
    v8 = *((float *)a1 + 4);
  }
  if ( v8 != v7 )
    return result;
  if ( *((float *)a1 + 1) == 3.4028e38 && FIELD_F32(a2, 8) == -3.4028e38 )
  {
    a1[1] = FIELD_U32(a2, 4);
    goto LABEL_24;
  }
  if ( *((float *)a1 + 2) == -3.4028e38 && FIELD_F32(a2, 4) == 3.4028e38 )
  {
    a1[2] = FIELD_U32(a2, 8);
    goto LABEL_24;
  }
  return result;
}
