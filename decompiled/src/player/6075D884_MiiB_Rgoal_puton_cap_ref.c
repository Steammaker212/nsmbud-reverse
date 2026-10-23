/* MiiB_Rgoal_puton_cap_ref
 * address: 0x6075D884   size: 232   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MiiB_Rgoal_puton_cap_ref(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v8; // r1
  int result; // r0
  bool v10; // zf
  char *v11; // r8
  signed int i; // r7
  signed int v13; // r0

  v8 = Player_registerRideAnimations();
  result = 1;
  v10 = v8 == 0;
  if ( !v8 )
  {
    result = 0;
    v10 = a4 == 99;
  }
  if ( v10 )
  {
    v11 = *(char **)(a3 + 4);
    if ( v11 != "MiiB_Rgoal_puton_cap" )
    {
      for ( i = 0; aMiibRgoalPuton[i]; i += 2 )
      {
        if ( i >= 0x80000 )
        {
          i = 0;
          break;
        }
        if ( !aMiibRgoalPuton[i + 1] )
        {
          ++i;
          break;
        }
      }
      v13 = FIELD_U32(a3, 8);
      if ( i >= v13 )
        i = v13 - 1;
      qmemcpy(*(void **)(a3 + 4), "MiiB_Rgoal_puton_cap", i);
      v11[i] = 0;
    }
    *a2 = a1[136];
    a1[49] |= 0x2000000u;
    a1[50] |= 0x2000000u;
    return 1;
  }
  return result;
}
