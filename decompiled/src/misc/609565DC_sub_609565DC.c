/* sub_609565DC
 * address: 0x609565DC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609565DC(_DWORD *a1, unsigned int *a2)
{
  unsigned int v4; // r1
  int v5; // r6
  int result; // r0
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r7
  int v10; // r2

  v4 = *a2;
  v5 = a1[31];
  if ( a1[30] > v4 )
    v5 += 1044 * v4;
  result = FIELD_U8(v5, 1040);
  if ( (result & 1) != 0 )
  {
    (*(void (__fastcall **)(_DWORD *, unsigned int *))(*a1 + 40))(a1, a2);
    v7 = FIELD_U32(v5, 4);
    if ( v7 )
    {
      v8 = *(_DWORD **)(v5 + 12);
      v9 = 4 * v7;
      do
      {
        (*(void (__fastcall **)(_DWORD *, unsigned int *, _DWORD))(*a1 + 44))(a1, a2, *v8);
        v10 = *v8;
        if ( (*(_BYTE *)(*v8 + 32) & 1) != 0 )
        {
          (**(void (__fastcall ***)(int, unsigned int *))(v10 + 36))(v10 + 36, a2);
          v10 = *v8;
        }
        (*(void (__fastcall **)(_DWORD *, unsigned int *, int))(*a1 + 48))(a1, a2, v10);
        v9 -= 4;
        ++v8;
      }
      while ( v9 );
    }
    return (*(int (__fastcall **)(_DWORD *, unsigned int *))(*a1 + 52))(a1, a2);
  }
  return result;
}
