/* Profile__get
 * address: 0x600182A0   size: 28   group: actorcore
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Profile *__fastcall Profile__get(unsigned int a1)
{
  if ( a1 >= 0x392 )
    a1 = 0;
  return (Profile *)Profiles[a1];
}
