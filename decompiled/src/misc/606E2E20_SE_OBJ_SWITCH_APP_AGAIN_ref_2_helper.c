/* SE_OBJ_SWITCH_APP_AGAIN_ref_2_helper
 * address: 0x606E2E20   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_SWITCH_APP_AGAIN_ref_2_helper(int a1)
{
  char v1; // r12
  int v2; // r5
  int v3; // r10
  _WORD *v4; // r9
  int v5; // r6
  char v7; // [sp+2Ch] [bp-3Ch]

  v7 = 0;
  if ( FIELD_U32(a1, 6908) != 1 )
  {
    v2 = 0;
    v3 = a1 + 6959;
    v4 = (_WORD *)(a1 + 6948);
    v7 = 0;
    do
    {
      if ( *v4 )
      {
        if ( *(_BYTE *)(v3 + v2) )
        {
          v5 = sub_607891A0(PlayerMgr_instance, v2);
          if ( ((unsigned int)&dword_60C7B37C & ~(1617833780 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( !v5 || (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378) != 1 )
            goto LABEL_17;
        }
        else
        {
          v5 = *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 48);
          if ( ((unsigned int)&dword_60C7B37C & ~(1617833876 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( !v5 || !(**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378) )
            goto LABEL_17;
        }
        v7 = 1;
        (*(void (__fastcall **)(int, int, int, _DWORD, float, float, _DWORD))(*(_DWORD *)v5 + 752))(
          v5,
          1,
          2,
          0,
          6.0,
          0.0,
          0);
      }
LABEL_17:
      ++v2;
      ++v4;
    }
    while ( v2 != 4 );
  }
  return v7 & 1;
}
