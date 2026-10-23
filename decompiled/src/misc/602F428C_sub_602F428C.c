/* sub_602F428C
 * address: 0x602F428C   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602F428C(unsigned __int8 *result)
{
  unsigned int v1; // r5
  unsigned int *v2; // r4
  int (__fastcall ***v3)(_DWORD, int *); // r7
  char v4; // r12

  v1 = *result;
  if ( v1 >= 0xC )
    v1 = 12;
  if ( v1 )
  {
    v2 = (unsigned int *)(result + 4);
    do
    {
      if ( *v2 )
      {
        v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, *v2);
        if ( ((unsigned int)&dword_60C7B39C & ~(1613710108 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
        {
          dword_60C7B398 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60C7B39C);
        }
        if ( v3 )
        {
          if ( (**v3)(v3, &dword_60C7B398) == 1 )
            sub_602EE940((int)v3);
        }
      }
      ++v2;
      --v1;
    }
    while ( v1 );
  }
}
