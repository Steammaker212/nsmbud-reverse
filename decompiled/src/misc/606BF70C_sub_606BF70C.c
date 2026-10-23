/* sub_606BF70C
 * address: 0x606BF70C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606BF70C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBA840 & ~(1617688356 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBA840) )
  {
    dword_60CBA83C = (int)&off_60C09BC4;
    _cxa_guard_release(&dword_60CBA840);
  }
  if ( a2 == &dword_60CBA83C )
    return 1;
  if ( ((unsigned int)dword_60CB0898 & ~(1617688448 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60CB0898) )
    {
      dword_60CB0894 = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60CB0898);
    }
  }
  return a2 == &dword_60CB0894 || sub_60026DC8(a2);
}
