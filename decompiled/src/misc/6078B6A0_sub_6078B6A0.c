/* sub_6078B6A0
 * address: 0x6078B6A0   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6078B6A0(_DWORD *a1)
{
  char v1; // r12
  int v3; // r2
  int (__fastcall ***v4)(_DWORD, int *); // r5
  int v5; // r1
  _BOOL4 result; // r0
  int v7; // r2
  int (__fastcall ***v8)(_DWORD, int *); // r5
  int v9; // r1
  int v10; // r2
  int (__fastcall ***v11)(_DWORD, int *); // r5
  int v12; // r1
  int v13; // r2
  int (__fastcall ***v14)(_DWORD, int *); // r4

  v3 = dword_60C99DD4 + 272;
  if ( !dword_60C99DD4 )
    v3 = dword_60C99DEC + 16;
  if ( !FIELD_U8(v3, 20) )
    goto LABEL_9;
  v4 = (int (__fastcall ***)(_DWORD, int *))a1[8];
  if ( ((unsigned int)&dword_60C9D3D4 & ~(1618523884 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3D4) )
  {
    dword_60C9D3D0 = (int)&off_60BFB878;
    _cxa_guard_release(&dword_60C9D3D4);
  }
  if ( !v4 || (v5 = (**v4)(v4, &dword_60C9D3D0), result = 1, !v5) )
  {
LABEL_9:
    v7 = dword_60C99DD4 + 272;
    if ( !dword_60C99DD4 )
      v7 = dword_60C99DEC + 16;
    if ( !FIELD_U8(v7, 92) )
      goto LABEL_17;
    v8 = (int (__fastcall ***)(_DWORD, int *))a1[9];
    if ( ((unsigned int)&dword_60C9D3D4 & ~(1618524060 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3D4) )
    {
      dword_60C9D3D0 = (int)&off_60BFB878;
      _cxa_guard_release(&dword_60C9D3D4);
    }
    if ( !v8 || (v9 = (**v8)(v8, &dword_60C9D3D0), result = 1, !v9) )
    {
LABEL_17:
      v10 = dword_60C99DD4 + 272;
      if ( !dword_60C99DD4 )
        v10 = dword_60C99DEC + 16;
      if ( !FIELD_U8(v10, 164) )
        goto LABEL_25;
      v11 = (int (__fastcall ***)(_DWORD, int *))a1[10];
      if ( ((unsigned int)&dword_60C9D3D4 & ~(1618524236 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3D4) )
      {
        dword_60C9D3D0 = (int)&off_60BFB878;
        _cxa_guard_release(&dword_60C9D3D4);
      }
      if ( !v11 || (v12 = (**v11)(v11, &dword_60C9D3D0), result = 1, !v12) )
      {
LABEL_25:
        v13 = dword_60C99DD4 + 272;
        if ( !dword_60C99DD4 )
          v13 = dword_60C99DEC + 16;
        if ( !FIELD_U8(v13, 236) )
          return 0;
        v14 = (int (__fastcall ***)(_DWORD, int *))a1[11];
        if ( ((unsigned int)&dword_60C9D3D4 & ~(1618524412 << v1) & 1) == 0 )
        {
          if ( _cxa_guard_acquire(&dword_60C9D3D4) )
          {
            dword_60C9D3D0 = (int)&off_60BFB878;
            _cxa_guard_release(&dword_60C9D3D4);
          }
        }
        return v14 && (**v14)(v14, &dword_60C9D3D0) != 0;
      }
    }
  }
  return result;
}
