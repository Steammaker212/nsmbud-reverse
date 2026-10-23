/* AGL_ROOT_tools_bat_perforce_save_bat_ref
 * address: 0x60967B1C   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall AGL_ROOT_tools_bat_perforce_save_bat_ref(_DWORD *a1)
{
  int v2; // r4
  _DWORD *v3; // r0
  signed int v4; // r5
  char *v5; // r6
  signed int v6; // r0

  v2 = dword_60CD0B48;
  if ( !dword_60CD0B48 )
  {
    v2 = operator_new_8DE2C8(0x154u, (int)a1, 4);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    v4 = 0;
    FIELD_U32(v2, 4) = off_60C5EBA4;
    dword_60CD0B44 = (int)v3;
    *(_DWORD *)v2 = off_60C5EBB4;
    FIELD_U32(v2, 20) = 0;
    FIELD_U32(v2, 24) = 0;
    FIELD_U32(v2, 28) = 0;
    sead__CriticalSection__ctor((sead_IDisposer *)(v2 + 32));
    FIELD_U32(v2, 68) = 0;
    FIELD_U32(v2, 76) = v2 + 84;
    FIELD_U32(v2, 72) = &BufferedSafeStringBase_char_vtable_probably;
    FIELD_U32(v2, 80) = 256;
    sead__BufferedSafeStringBase__assureTerminationImpl_const(v2 + 72);
    FIELD_U32(v2, 72) = &off_60BD94D4;
    v5 = *(char **)(v2 + 76);
    if ( v5 != "%AGL_ROOT%/tools/bat/perforce_save.bat" )
    {
      while ( aAglRootToolsBa[v4] )
      {
        if ( v4 >= 0x80000 )
        {
          v4 = 0;
          break;
        }
        if ( !aAglRootToolsBa[v4 + 1] )
        {
          ++v4;
          break;
        }
        v4 += 2;
      }
      v6 = FIELD_U32(v2, 80);
      if ( v4 >= v6 )
        v4 = v6 - 1;
      qmemcpy(*(void **)(v2 + 76), "%AGL_ROOT%/tools/bat/perforce_save.bat", v4);
      v5[v4] = 0;
    }
    FIELD_U32(v2, 72) = &off_60BD94BC;
    dword_60CD0B48 = v2;
  }
  return v2;
}
