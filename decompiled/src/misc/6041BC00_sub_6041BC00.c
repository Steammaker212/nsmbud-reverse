/* sub_6041BC00
 * address: 0x6041BC00   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041BC00(int a1)
{
  void *v2; // r0
  int v3; // r7
  int v4; // r5
  void *v5; // r0

  sub_6041C79C();
  if ( FIELD_U32(a1, 1744) )
  {
    sub_6083DFFC(a1 + 1740, FIELD_U32(dword_60CCFC8C, 24));
    sub_60913ABC(a1 + 2040);
    sub_60913AD4(a1 + 2040);
    v2 = *(void **)(a1 + 1744);
    if ( v2 )
      operator_delete(v2);
    FIELD_U32(a1, 1744) = 0;
  }
  if ( FIELD_U32(a1, 1088) )
  {
    v3 = 0;
    v4 = a1 + 1624;
    do
    {
      if ( *(_QWORD *)(v4 + v3) != -1 )
      {
        sub_60916A94(dword_60CCFC8C, *(_DWORD *)(v4 + v3));
        *(_DWORD *)(v4 + v3) = -1;
        *(_DWORD *)(v4 + v3 + 4) = -1;
      }
      v3 += 8;
    }
    while ( v3 != 112 );
    sub_6083E2B4(a1 + 1084, FIELD_U32(dword_60CCFC8C, 24));
    sub_60913ABC(a1 + 1384);
    sub_60913AD4(a1 + 1384);
    v5 = *(void **)(a1 + 1088);
    if ( v5 )
      operator_delete(v5);
    FIELD_U32(a1, 1088) = 0;
  }
  return sub_6041C894(a1);
}
