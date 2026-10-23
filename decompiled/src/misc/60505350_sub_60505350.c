/* sub_60505350
 * address: 0x60505350   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60505350(int a1)
{
  int v2; // r7
  int v3; // r9
  int v4; // r8
  _DWORD *v5; // r5
  unsigned int v6; // r6
  _DWORD *v7; // r0

  v2 = 0;
  v3 = a1 + 3636;
  v4 = dword_60CC6E04;
  v5 = (_DWORD *)(dword_60C9A1F0 + 16);
  while ( 1 )
  {
    v6 = *(_DWORD *)(v3 + 4 * v2);
    v7 = sub_603FD91C(v5, v6);
    if ( sub_603FD93C((int)v7) == FIELD_U32(a1, 3604) && *(_BYTE *)(FIELD_U32(v4, 40) + 104 * v6 + 6264) == 1 )
      break;
    if ( ++v2 == 67 )
      return 0;
  }
  return 1;
}
