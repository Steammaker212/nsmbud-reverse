/* sub_6040D7A8
 * address: 0x6040D7A8   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040D7A8(_DWORD *a1, unsigned int a2)
{
  int v4; // r1
  int v5; // r0
  bool v6; // cc
  char *v7; // r0

  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v4 = 0;
  v5 = a1[1];
  while ( *(_BYTE *)(v5 + v4) )
  {
    if ( !*(_BYTE *)(v5 + v4 + 1) )
    {
      ++v4;
      break;
    }
    if ( !*(_BYTE *)(v5 + v4 + 2) )
    {
      v4 += 2;
      break;
    }
    v6 = v4 + 2 < 0x80000;
    v4 += 3;
    if ( !v6 )
    {
      v4 = 0;
      break;
    }
  }
  v7 = (char *)(v5 + 2);
  if ( v4 < 2 )
    v7 = &byte_60B3BA34;
  if ( a2 <= 2 && *v7 == 75 )
    return a2;
  else
    return sub_6040D4F0(a1);
}
