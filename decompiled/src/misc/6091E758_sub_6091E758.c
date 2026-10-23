/* sub_6091E758
 * address: 0x6091E758   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091E758(int a1)
{
  int v2; // r0
  int v3; // r1
  void *v4; // r5
  int v5; // r7
  int v6; // r6

  sub_6091F0FC();
  v2 = FIELD_U32(a1, 32);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4);
    v4 = (void *)(v2 - 8);
    if ( v3 )
    {
      v5 = v2 - 936;
      v6 = 936 * v3;
      do
      {
        sub_6091BD9C(v5 + v6);
        v6 -= 936;
      }
      while ( v6 );
    }
    operator_delete_8DE3FC(v4);
    FIELD_U32(a1, 28) = 0;
    FIELD_U32(a1, 32) = 0;
  }
  if ( FIELD_U32(a1, 20) )
  {
    sub_6091491C((_DWORD *)(a1 + 20));
    FIELD_U32(a1, 20) = 0;
  }
  if ( FIELD_U32(a1, 48) )
  {
    sub_60913ABC(a1 + 48);
    sub_60913AD4((_DWORD *)(a1 + 48));
  }
  FIELD_U16(a1, 60) = 0;
  return 0;
}
