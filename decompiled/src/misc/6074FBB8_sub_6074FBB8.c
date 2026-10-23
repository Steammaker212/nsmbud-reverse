/* sub_6074FBB8
 * address: 0x6074FBB8   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6074FBB8(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)dword_60CBEAA4 & ~(1618279376 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CBEAA4) )
  {
    dword_60CBEAA0 = (int)&off_60BC00BC;
    _cxa_guard_release(dword_60CBEAA4);
  }
  v4 = 1;
  if ( a2 != &dword_60CBEAA0 )
  {
    if ( ((unsigned int)&dword_60C7B364 & ~(1618279472 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( a2 != &StageActor_RTTI )
    {
      if ( ((unsigned int)&dword_60C7B36C & ~(1618279564 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B36C) )
      {
        Actor_RTTI = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C7B36C);
      }
      return a2 == &Actor_RTTI;
    }
  }
  return v4;
}
