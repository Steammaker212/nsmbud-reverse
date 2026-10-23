/* sub_6078A50C
 * address: 0x6078A50C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6078A50C()
{
  _BYTE *v0; // r2

  v0 = (_BYTE *)(dword_60C99DD4 + 272);
  if ( !dword_60C99DD4 )
    v0 = (_BYTE *)(dword_60C99DEC + 16);
  return (unsigned __int8)(v0[236] + v0[164] + v0[92] + v0[20]);
}
