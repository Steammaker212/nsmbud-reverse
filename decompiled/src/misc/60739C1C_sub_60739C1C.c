/* sub_60739C1C
 * address: 0x60739C1C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60739C1C(int a1)
{
  unsigned __int8 *v2; // r7
  bool v3; // zf
  unsigned int v4; // r0
  unsigned __int8 v5; // r6
  int v6; // r0

  v2 = (unsigned __int8 *)(a1 + 6108);
  v3 = FIELD_U8(a1, 6108) == 0;
  v4 = 0;
  if ( !v3 )
  {
    v5 = 0;
    do
    {
      v6 = sub_6073AFA4(a1, v5);
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)v6 + 192))(v6, &dword_60CBDEE0);
      v4 = *v2;
      ++v5;
    }
    while ( v5 < v4 );
  }
  FIELD_U16(a1, 6100) = 0x28 / v4;
  FIELD_U8(a1, 6102) = 0;
  return 6102;
}
