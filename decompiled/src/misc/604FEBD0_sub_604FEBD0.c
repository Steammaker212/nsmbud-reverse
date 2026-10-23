/* sub_604FEBD0
 * address: 0x604FEBD0   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FEBD0(int a1)
{
  _DWORD *v1; // r4
  unsigned int v2; // r3

  v1 = (_DWORD *)(a1 + 2140);
  v2 = sub_604746E4(a1 + 2140, &dword_60CA7420, &dword_60CA7428);
  if ( v2 != -1 )
    sub_604742D0(v1, 0, &dword_60CA7420, v2, 1.0, 0);
  sub_6047482C((int)v1, 0);
  return sub_6080A310(SoundSystem_instance, 40, 1000);
}
