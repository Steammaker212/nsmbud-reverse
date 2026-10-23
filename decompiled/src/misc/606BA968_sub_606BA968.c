/* sub_606BA968
 * address: 0x606BA968   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606BA968(int *a1, int *a2, int a3)
{
  int v6; // r0
  unsigned int v7; // r6
  int v8; // r0
  unsigned int v9; // r0
  int v10; // r0
  unsigned int v11; // r1
  int result; // r0
  int v13; // r0
  int v14; // r12
  int *v15; // r3
  int v16; // t1

  if ( !a3 )
    return 0;
  v6 = FIELD_U8(a3, 533);
  if ( v6 != 2 )
  {
    if ( v6 == 1 )
    {
      v7 = FIELD_S8(a3, 84);
      if ( v7 <= 3 && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << v7)) != 0 && !sub_607B7028(a3) )
      {
        v8 = sub_6079D894(a3);
        if ( v8
          && (v9 = FIELD_S8(v8, 84), v9 <= 3)
          && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << v9)) != 0 )
        {
          v10 = 1 << v9;
        }
        else
        {
          v10 = 0;
        }
        return v10 | (1 << v7);
      }
    }
    else if ( Actor__getProfileId((Actor *)a3) == 392 )
    {
      v13 = FIELD_U32(a3, 8);
      if ( v13 )
      {
        v14 = *a2;
        if ( (unsigned int)*a2 <= 0xF )
        {
          if ( v14 < 1 )
          {
LABEL_22:
            *a2 = v14 + 1;
            a1[v14] = v13;
            return sub_606BAB1C(a1, a2, a3 + 6104);
          }
          v15 = a1;
          while ( 1 )
          {
            v16 = *v15++;
            if ( v13 == v16 )
              break;
            if ( v15 >= &a1[v14] )
              goto LABEL_22;
          }
        }
      }
    }
    return 0;
  }
  v11 = FIELD_S8(a3, 84);
  if ( v11 > 3 )
    return 0;
  result = (unsigned __int16)(FIELD_U16(PlayerMgr_instance, 66) & (1 << v11));
  if ( (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << v11)) != 0 )
    return 1 << v11;
  return result;
}
