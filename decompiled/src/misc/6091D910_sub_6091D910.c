/* sub_6091D910
 * address: 0x6091D910   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091D910(int a1, unsigned int a2)
{
  if ( a2 <= 3 )
    return ((int (*)(void))((char *)dword_6091D92C + dword_6091D92C[a2]))();
  else
    return 0;
}
