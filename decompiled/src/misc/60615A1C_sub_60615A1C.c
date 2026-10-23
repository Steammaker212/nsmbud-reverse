/* sub_60615A1C
 * address: 0x60615A1C   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60615A1C(int a1)
{
  char v1; // r12
  unsigned int v3; // r0
  int *v4; // r6
  int v5; // r5
  int v6; // r0
  int v7; // r0
  char *v8; // r1
  char *v9; // r0
  int v10; // r1

  v4 = (int *)(a1 + 7628);
  v3 = FIELD_U32(a1, 7628);
  if ( v3 != -1 )
  {
    if ( v3 >= 4 )
      v3 = 0;
    v5 = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 48);
    if ( ((unsigned int)&dword_60C7B37C & ~(1616992868 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378) == 1 )
    {
      v6 = FIELD_U32(v5, 1316);
      if ( FIELD_U8(dword_60CC6D78, 2095) )
        v6 = 1;
      if ( v6 == 6 )
      {
        FIELD_U8(a1, 7611) = 1;
        v7 = *v4;
        if ( (unsigned int)*v4 >= 6 )
          v7 = 0;
        v6 = *(_DWORD *)(dword_60C99DD4 + 72 * v7 + 308);
        v8 = (char *)&unk_60B0659C;
      }
      else
      {
        v8 = (char *)&unk_60B06584;
      }
      v9 = &v8[4 * v6];
      v10 = FIELD_U32(a1, 6788);
      FIELD_U32(v10, 20) = *(_DWORD *)v9;
      FIELD_U32(v10, 28) |= 2u;
    }
  }
}
