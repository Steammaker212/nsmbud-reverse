/* sub_608FDE40
 * address: 0x608FDE40   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_608FDE40(_DWORD *a1, const char *a2, ...)
{
  int v4; // r5
  int v5; // r0
  int v6; // r7
  bool v7; // cc
  unsigned int v8; // r6
  signed int v9; // r0
  va_list va; // [sp+20h] [bp-8h] BYREF

  va_start(va, a2);
  v4 = a1[1];
  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v5 = a1[1];
  v6 = 0;
  while ( *(_BYTE *)(v5 + v6) )
  {
    if ( !*(_BYTE *)(v5 + v6 + 1) )
    {
      ++v6;
      break;
    }
    if ( !*(_BYTE *)(v5 + v6 + 2) )
    {
      v6 += 2;
      break;
    }
    v7 = v6 + 2 < 0x80000;
    v6 += 3;
    if ( !v7 )
    {
      v6 = 0;
      break;
    }
  }
  v8 = a1[2] - v6;
  v9 = sead__StringUtil__vsnprintf((char *)(v4 + v6), v8, a2, va);
  if ( v9 < 0 )
    v9 = v8 - 1;
  return v9 + v6;
}
