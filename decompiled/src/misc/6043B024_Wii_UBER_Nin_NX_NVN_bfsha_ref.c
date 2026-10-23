/* Wii_UBER_Nin_NX_NVN_bfsha_ref
 * address: 0x6043B024   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (**Wii_UBER_Nin_NX_NVN_bfsha_ref())()
{
  int v0; // r4
  signed int i; // r5

  dword_60C9CA3C = (int)&unk_60C9CA44;
  dword_60C9CA38 = (int)&BufferedSafeStringBase_char_vtable_probably;
  dword_60C9CA40 = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60C9CA38);
  dword_60C9CA38 = (int)&off_60BD4C08;
  v0 = dword_60C9CA3C;
  if ( (char *)dword_60C9CA3C != "Wii_UBER.Nin_NX_NVN.bfsha" )
  {
    for ( i = 0; aWiiUberNinNxNv[i]; i += 2 )
    {
      if ( i >= 0x80000 )
      {
        i = 0;
        break;
      }
      if ( !aWiiUberNinNxNv[i + 1] )
      {
        ++i;
        break;
      }
    }
    if ( i >= dword_60C9CA40 )
      i = dword_60C9CA40 - 1;
    qmemcpy((void *)dword_60C9CA3C, "Wii_UBER.Nin_NX_NVN.bfsha", i);
    *(_BYTE *)(v0 + i) = 0;
  }
  dword_60C9CA38 = (int)&off_60BD4BF0;
  return &off_60BD4BF0;
}
