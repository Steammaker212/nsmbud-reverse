/* sub_606AABB0
 * address: 0x606AABB0   size: 732   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606AABB0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB9E7C & ~(1617603864 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9E7C) )
  {
    dword_60CB9E78 = (int)&off_60C1A198;
    _cxa_guard_release(&dword_60CB9E7C);
  }
  if ( a2 == &dword_60CB9E78 )
    return 1;
  if ( ((unsigned int)dword_60CB9D44 & ~(1617603956 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CB9D44) )
  {
    dword_60CB9D40 = (int)&off_60C158E4;
    _cxa_guard_release(dword_60CB9D44);
  }
  if ( a2 == &dword_60CB9D40 )
    return 1;
  if ( ((unsigned int)&dword_60CB73E8 & ~(1617604048 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB73E8) )
  {
    dword_60CB73E4 = (int)&off_60C158F0;
    _cxa_guard_release(&dword_60CB73E8);
  }
  if ( a2 == &dword_60CB73E4 )
    return 1;
  if ( ((unsigned int)&dword_60CB73F0 & ~(1617604140 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB73F0) )
    {
      dword_60CB73EC = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB73F0);
    }
  }
  return a2 == &dword_60CB73EC || sub_60027FB0(a2);
}
