/* sub_608BB970
 * address: 0x608BB970   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BB970(int a1, int a2)
{
  int result; // r0
  int v4; // r5
  int i; // r5
  int v6; // r5
  int v7; // r6

  result = FIELD_U8(a1, 6);
  if ( !result )
  {
    switch ( a2 )
    {
      case 0:
        result = 0;
        goto LABEL_15;
      case 1:
        goto LABEL_14;
      case 2:
        ((void (__fastcall *)(int))loc_608BB3C8)(a1);
        v4 = FIELD_U32(a1, 380);
        if ( v4 )
        {
          do
          {
            if ( FIELD_U8(v4, 177) )
              sub_608C7BA4(v4);
            v4 = FIELD_U32(v4, 368);
          }
          while ( v4 );
          for ( i = FIELD_U32(a1, 380); i; i = FIELD_U32(i, 368) )
            sub_608C7E5C(i);
        }
        goto LABEL_13;
      case 3:
        v6 = FIELD_U32(a1, 380);
        if ( v6 )
        {
          do
          {
            v7 = FIELD_U32(v6, 368);
            sub_608C77DC(v6);
            sub_608C7D68(v6, 0);
            sub_608C7E44(v6);
            v6 = v7;
          }
          while ( v7 );
        }
LABEL_13:
        FIELD_U32(a1, 380) = 0;
LABEL_14:
        result = 1;
LABEL_15:
        FIELD_U8(a1, 194) = result;
        break;
      default:
        return result;
    }
  }
  return result;
}
