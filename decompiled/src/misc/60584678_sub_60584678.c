/* sub_60584678
 * address: 0x60584678   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60584678(int a1, float *a2, int a3, int a4)
{
  int v5; // r7
  _BYTE *v6; // r4
  unsigned int v7; // r6
  int Area; // r0
  int v9; // r2
  int v10; // r1
  float v12; // [sp+Ch] [bp-34h] BYREF
  float v13; // [sp+10h] [bp-30h]
  int v14; // [sp+14h] [bp-2Ch]
  int v15; // [sp+18h] [bp-28h]

  v5 = 256;
  v6 = (_BYTE *)(a1 + 20520);
  v7 = FIELD_U8(LevelInfo_instance, 18);
  do
  {
    if ( *v6 )
    {
      if ( (unsigned __int8)*(v6 - 3) == v7 )
      {
        v12 = 3.4028e38;
        v13 = 3.4028e38;
        v14 = -8388609;
        v15 = -8388609;
        Area = Level_getArea(Level_instance, v7);
        LevelArea_getLocation(Area, &v12, (unsigned __int8)*(v6 - 2));
        if ( v12 <= *a2 && v13 <= a2[1] )
        {
          if ( a3 == 2 )
          {
            if ( (*(v6 - 4) & 1) != 0 )
              goto LABEL_24;
          }
          else
          {
            if ( a3 )
              goto LABEL_24;
            if ( sub_60729CF0(EventMgr__instance, 0) )
            {
              if ( (*(v6 - 4) & 4) != 0 )
                goto LABEL_24;
            }
            else if ( (*(v6 - 4) & 2) != 0 )
            {
              goto LABEL_24;
            }
          }
          v9 = *((_DWORD *)v6 - 6);
          *((_DWORD *)v6 - 6) = v9 + 1;
          v10 = *((_DWORD *)v6 - 2);
          if ( v10 && !v9 && !*(v6 - 1) )
          {
            *(v6 - 1) = 1;
            *((_DWORD *)v6 - 3) = 30 * v10;
          }
          if ( *((_DWORD *)v6 - 5) <= v9 + 1 && (!*(v6 - 1) || *((_DWORD *)v6 - 3)) )
          {
            if ( *((_DWORD *)v6 - 4) )
              nullsub_4();
            else
              SE_SYS_NICE_S_ref();
          }
        }
      }
    }
LABEL_24:
    v6 += 28;
    --v5;
  }
  while ( v5 );
}
