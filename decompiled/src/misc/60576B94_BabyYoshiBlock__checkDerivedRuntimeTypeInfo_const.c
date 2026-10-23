/* BabyYoshiBlock__checkDerivedRuntimeTypeInfo_const
 * address: 0x60576B94   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BlockBase : 0x60565008
// 
// Overridden by: None
bool __fastcall BabyYoshiBlock__checkDerivedRuntimeTypeInfo_const(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CAEC08 & ~(1616342140 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAEC08) )
  {
    dword_60CAEC04 = (int)&off_60C012E8;
    _cxa_guard_release(&dword_60CAEC08);
  }
  if ( a2 == &dword_60CAEC04 )
    return 1;
  if ( ((unsigned int)&dword_60CAE2F4 & ~(1616342232 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE2F4) )
  {
    dword_60CAE2F0 = (int)&off_60BD48F8;
    _cxa_guard_release(&dword_60CAE2F4);
  }
  if ( a2 == &dword_60CAE2F0 )
    return 1;
  if ( ((unsigned int)&dword_60C88A68 & ~(1616342324 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A68) )
  {
    dword_60C88A64 = (int)&off_60BD4904;
    _cxa_guard_release(&dword_60C88A68);
  }
  if ( a2 == &dword_60C88A64 )
    return 1;
  if ( ((unsigned int)&dword_60C7B384 & ~(1616342416 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B384) )
    {
      dword_60C7B380 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B384);
    }
  }
  return a2 == &dword_60C7B380 || sub_60026DC8(a2);
}
