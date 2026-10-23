/* sub_60237BA0
 * address: 0x60237BA0   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60237BA0(unsigned int a1)
{
  int v1; // r4
  bool v2; // zf
  Actor *v3; // r1

  v1 = 1;
  if ( a1 == -1 )
    return v1;
  v2 = dword_60C8C188 == 0;
  if ( dword_60C8C188 )
    v2 = a1 == 3;
  if ( !v2 )
  {
    v1 = 0;
    if ( FIELD_U8(dword_60C8C188, 3225) )
      return v1;
  }
  if ( a1 <= 7 && dword_60C995D0 )
  {
    if ( a1 - 4 >= 4 )
    {
      if ( a1 == 2 )
      {
        if ( FIELD_U32(dword_60C995D0, 32) )
          return sub_603E5154(dword_60C995D0);
      }
      else if ( !a1 )
      {
        return FIELD_U32(dword_60C995D0, 32) == 0;
      }
    }
    else if ( FIELD_U32(dword_60C995D0, 32) )
    {
      if ( PlayerMgr_instance )
      {
        v1 = 0;
        v3 = *(Actor **)(PlayerMgr_instance + 4 * (a1 - 4) + 48);
        if ( v3 )
        {
          if ( sub_603E54CC(dword_60C995D0, v3) != 1 )
            return v1;
        }
      }
    }
  }
  return 1;
}
