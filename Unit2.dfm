object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 96
  ClientWidth = 226
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 56
    Top = 16
    Width = 66
    Height = 15
    Caption = 'format : a+b'
  end
  object Edit1: TEdit
    Left = 8
    Top = 48
    Width = 121
    Height = 23
    TabOrder = 0
  end
  object Button1: TButton
    Left = 135
    Top = 47
    Width = 75
    Height = 25
    Caption = 'Calculate'
    TabOrder = 1
    OnClick = Button1Click
  end
end
