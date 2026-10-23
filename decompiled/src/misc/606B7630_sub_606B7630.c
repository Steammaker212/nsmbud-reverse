/* sub_606B7630
 * address: 0x606B7630   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B7630(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60CBA464 & ~(1617655368 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBA464) )
  {
    dword_60CBA460 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CBA464);
  }
  v4 = 0;
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CBA460) == 1 )
    {
      v4 = 1;
      if ( !FIELD_U32(v3, 6256) )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 240))(v3);
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 244))(v3);
        v4 = 1;
        FIELD_U8(v3, 6182) = 1;
      }
    }
  }
  return v4;
}
