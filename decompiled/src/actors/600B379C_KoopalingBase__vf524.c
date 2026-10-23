/* KoopalingBase__vf524
 * address: 0x600B379C   size: 176   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
char **__fastcall KoopalingBase__vf524(int a1)
{
  char **result; // r0
  _DWORD *v3; // r1
  _DWORD *v4; // r2
  unsigned int v5; // r3
  unsigned int v6; // r1

  result = (char **)**(unsigned __int8 **)(FIELD_U32(a1, 7120) + 12);
  if ( result )
  {
    result = *(char ***)(a1 + 8116);
    if ( result )
    {
      if ( *result != "SE_VOC_NO_SOUND" )
      {
        v3 = *(_DWORD **)(a1 + 7096);
        v4 = (_DWORD *)v3[3];
        v5 = v3[2];
        v6 = v3[17];
        if ( v5 > v6 )
          v4 += v6;
        result = (char **)sub_60418548(*v4 + 4);
        if ( result == (char **)1 )
          return (char **)sub_608134CC(a1 + 6332, **(_DWORD **)(a1 + 8116), FIELD_S16(a1, 6640), 0);
      }
    }
  }
  return result;
}
