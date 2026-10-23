/* sub_601E1398
 * address: 0x601E1398   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E1398(int a1)
{
  char v1; // r12
  int v3; // r0
  int v4; // r4
  int v5; // r6
  int v6; // r2
  int i; // r5
  int result; // r0

  if ( ((unsigned int)&dword_60C8B0F4 & ~(1612583860 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8B0F4) )
  {
    dword_60C8B0F8 = (int)&sead__SafeStringBase__vtable;
    dword_60C8B0FC = (int)"W6C1";
    _cxa_guard_release(&dword_60C8B0F4);
  }
  v3 = sub_601A4454(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  v4 = sub_60178780(v3, FIELD_U32(a1, 8));
  (*(void (__fastcall **)(int))(FIELD_U32(v4, 4) + 12))(v4 + 4);
  (*(void (__fastcall **)(int))(FIELD_U32(v4, 4) + 12))(v4 + 4);
  v5 = FIELD_U32(v4, 8);
  (*(void (__fastcall **)(int *))(dword_60C8B0F8 + 12))(&dword_60C8B0F8);
  if ( v5 == dword_60C8B0FC )
    return 1;
  v6 = FIELD_U32(v4, 8);
  for ( i = 1; ; i += 2 )
  {
    result = 0;
    if ( *(unsigned __int8 *)(v6 + i - 1) != *(unsigned __int8 *)(dword_60C8B0FC + i - 1) )
      break;
    if ( !*(_BYTE *)(v6 + i - 1) )
      return 1;
    if ( i > 0x80000 )
      break;
    if ( *(unsigned __int8 *)(v6 + i) != *(unsigned __int8 *)(dword_60C8B0FC + i) )
      break;
    result = 1;
    if ( !*(_BYTE *)(v6 + i) )
      break;
  }
  return result;
}
