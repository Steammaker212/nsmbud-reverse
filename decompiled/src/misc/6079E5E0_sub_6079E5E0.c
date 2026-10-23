/* sub_6079E5E0
 * address: 0x6079E5E0   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079E5E0(int *a1, int a2, int a3)
{
  int v5; // r6

  v5 = 0;
  if ( a2 )
  {
    switch ( a3 )
    {
      case 0:
        if ( !(*(int (__fastcall **)(int *))(*a1 + 1064))(a1) )
        {
          v5 = 1;
          if ( sub_60786968((int)(a1 + 172)) )
            return v5;
        }
        return 0;
      case 1:
        if ( (*(int (__fastcall **)(int *))(*a1 + 1064))(a1)
          || sub_60786968((int)(a1 + 172)) != 1
          || (a1[306] & 0x10) == 0 )
        {
          return 0;
        }
        sub_6079E154(a1, FIELD_U32(a2, 8), 1);
        sub_60773630((int)a1, 18, 0);
        return 1;
      case 2:
        if ( (a1[306] & 0x10) == 0 )
          return 0;
        sub_6079E724(a1);
        sub_6079E27C((int)a1, FIELD_U32(a2, 8), 2);
        return 1;
      case 3:
        if ( (a1[306] & 0x10) == 0 )
          return 0;
        sub_6079E724(a1);
        sub_6079E154(a1, FIELD_U32(a2, 8), 3);
        sub_60773630((int)a1, 18, 0);
        return 1;
      default:
        return 0;
    }
  }
  return v5;
}
