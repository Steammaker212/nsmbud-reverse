/* sub_6099E84C
 * address: 0x6099E84C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099E84C(_DWORD *a1, signed int a2, int a3)
{
  _DWORD *v6; // r7
  unsigned int *v7; // r7
  __int64 v9; // r0
  int v10; // r0
  int result; // r0
  unsigned int v12; // r1

  v6 = a1 + 1;
  (*(void (__fastcall **)(_DWORD *))(a1[1] + 12))(a1 + 1);
  sub_6099E924(v6 + 21, v6[1], a3);
  v7 = v6 + 3;
  while ( *v7 == 1 )
    ;
  do
  {
    while ( __ldrex(v7) )
      ;
  }
  while ( __strex(1u, v7) );
  if ( a2 >= 1 )
  {
    v9 = 4LL * (unsigned int)a2;
    if ( !is_mul_ok(4u, a2) )
      HIDWORD(v9) = 1;
    if ( HIDWORD(v9) )
      LODWORD(v9) = -1;
    v10 = sub_608DE334(v9, a3, 4);
    if ( v10 )
    {
      a1[28] = a2;
      a1[29] = v10;
    }
  }
  result = 0;
  a1[30] = 0;
  a1[31] = 0;
  a1[20] = 1;
  __dmb(0xBu);
  do
  {
    do
      v12 = __ldrex(v7);
    while ( v12 != 1 );
  }
  while ( __strex(0, v7) );
  return result;
}
