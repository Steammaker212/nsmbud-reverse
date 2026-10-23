/* _init
 * address: 0x60000024   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void init()
{
  void (__cdecl **v0)(); // r4
  void (__cdecl *v1)(); // t1

  if ( dword_60C7B35C )
  {
    if ( &off_60C7A150 >= dword_60C7B274 )
      return;
    goto LABEL_6;
  }
  dword_60C7B35C = _nnmusl_init_dso(
                     (int)&dword_60000000,
                     (int)sub_609AD3BC,
                     (int)dword_60C7B274,
                     (int)dword_60C7B274,
                     (int)&dword_60000000,
                     (int)dword_60C7B274,
                     (int)dword_60C7B274,
                     (int)dword_60C7B274,
                     (int)&dword_60000000,
                     (int)dword_60C7B274,
                     (int)&unk_60C6127C,
                     (int)&unk_60C7A14C,
                     (int)&_rela_dyn_start,
                     (int)&_rela_dyn_end,
                     (int)&unk_609AF048,
                     (int)&unk_60AAE298,
                     (int)&_rela_plt_start,
                     (int)&_rela_plt_end,
                     (int)&unk_60AAE298,
                     (int)&unk_60AAF118,
                     (int)&DYNAMIC);
  if ( dword_60C7B35C != 1 && &off_60C7A150 < dword_60C7B274 )
  {
LABEL_6:
    v0 = (void (__cdecl **)())&off_60C7A150;
    do
    {
      v1 = *v0++;
      v1();
    }
    while ( v0 < (void (__cdecl **)())dword_60C7B274 );
  }
}
