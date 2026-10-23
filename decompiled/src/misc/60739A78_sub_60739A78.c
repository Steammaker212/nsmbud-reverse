/* sub_60739A78
 * address: 0x60739A78   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60739A78(int a1)
{
  unsigned __int8 *v2; // r6
  unsigned __int8 v3; // r7
  int v4; // r0

  v2 = (unsigned __int8 *)(a1 + 6108);
  if ( FIELD_U8(a1, 6108) )
  {
    v3 = 0;
    do
    {
      v4 = sub_6073AFA4(a1, v3);
      StateMgr__changeState((StateMgr *)(FIELD_U32(v4, 7396) + 6084), (StateBase *)&dword_60CBDDA0);
      ++v3;
    }
    while ( v3 < (unsigned int)*v2 );
  }
  FIELD_U8(a1, 6102) = 0;
  FIELD_U16(a1, 6100) = 20;
  return 6100;
}
