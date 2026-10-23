/* sub_60191C9C
 * address: 0x60191C9C   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60191C9C()
{
  signed int v0; // r4
  int v1; // r5

  v0 = 0;
  dword_60C89974 = 0;
  dword_60C89978 = 0;
  dword_60C8997C = 0;
  dword_60C89970 = 0;
  dword_60C89984 = (int)&unk_60C8998C;
  dword_60C89980 = (int)&BufferedSafeStringBase_char_vtable_probably;
  dword_60C89988 = 8;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60C89980);
  dword_60C89980 = (int)&off_60BD58EC;
  v1 = dword_60C89984;
  if ( (char *)dword_60C89984 != "None" )
  {
    while ( aNone_0[v0] )
    {
      if ( v0 >= 0x80000 )
      {
        v0 = 0;
        break;
      }
      if ( !aNone_0[v0 + 1] )
      {
        ++v0;
        break;
      }
      v0 += 2;
    }
    if ( v0 >= dword_60C89988 )
      v0 = dword_60C89988 - 1;
    qmemcpy((void *)dword_60C89984, "None", v0);
    *(_BYTE *)(v1 + v0) = 0;
  }
  dword_60C89980 = (int)&off_60BD4B8C;
  return &dword_60C89970;
}
