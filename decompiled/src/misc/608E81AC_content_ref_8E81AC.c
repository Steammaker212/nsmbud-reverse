/* content_ref_8E81AC
 * address: 0x608E81AC   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall content_ref_8E81AC(_DWORD *a1, const char *a2)
{
  int v3; // r5
  int v4; // r0
  void *v5; // r0
  _DWORD *v6; // r0

  *a1 = off_60C5C238;
  if ( (_DWORD *)dword_60CCEBCC == a1 )
  {
    dword_60CCEBCC = 0;
    v3 = dword_60CCEBD0;
    v4 = FIELD_U32(dword_60CCEBD0, 32);
    if ( v4 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
      FIELD_U32(v3, 32) = 0;
    }
    nn__fs__Unmount((nn__fs *)"content", a2);
    v5 = *(void **)(v3 + 36);
    if ( v5 )
      operator_delete_8DE3FC(v5);
    dword_60CCEBD0 = 0;
  }
  v6 = sead__IDisposer__dtor(a1);
  operator_delete(v6);
}
