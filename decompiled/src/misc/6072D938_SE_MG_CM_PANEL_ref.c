/* SE_MG_CM_PANEL_ref
 * address: 0x6072D938   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_MG_CM_PANEL_ref(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r0
  const char *v5; // r1

  if ( *(_BYTE *)(FIELD_U32(a2, 64) + 533) == 1 )
  {
    v3 = FIELD_U32(a1, 64);
    if ( ((unsigned int)&dword_60CBD948 & ~(1618139488 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD948) )
    {
      dword_60CBD944 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CBD948);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CBD944) == 1 )
    {
      v4 = sub_6072DA68(v3);
      if ( FIELD_U8(v3, 6106) )
      {
        ++FIELD_U16(v4, 6106);
        v5 = "SE_MG_CM_PANEL_NG";
      }
      else
      {
        ++FIELD_U16(v4, 6104);
        v5 = "SE_MG_CM_PANEL_OK";
      }
      sub_60807EF0(SoundSystem_instance, v5, 0, 1);
      StageActor__delete((StateActor *)v3, 1);
    }
  }
}
