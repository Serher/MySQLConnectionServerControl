object Form1: TForm1
  Left = 192
  Top = 126
  Width = 938
  Height = 672
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = RUSSIAN_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'Times New Roman'
  Font.Style = []
  OldCreateOrder = False
  DesignSize = (
    922
    633)
  PixelsPerInch = 96
  TextHeight = 19
  object Label1: TLabel
    Left = 16
    Top = 616
    Width = 104
    Height = 14
    Anchors = [akLeft, akBottom]
    Caption = 'Osipov, 07.2017, v1.0'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
  end
  object SG1: TStringGrid
    Left = 16
    Top = 104
    Width = 890
    Height = 434
    Anchors = [akLeft, akTop, akRight, akBottom]
    ColCount = 2
    RowCount = 2
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    TabOrder = 0
    OnKeyPress = SG1KeyPress
    ColWidths = (
      12
      64)
  end
  object ED1: TEdit
    Left = 16
    Top = 547
    Width = 889
    Height = 27
    Anchors = [akLeft, akRight, akBottom]
    TabOrder = 1
    OnKeyDown = ED1KeyDown
    OnKeyPress = ED1KeyPress
  end
  object Memo1: TMemo
    Left = 16
    Top = 40
    Width = 891
    Height = 49
    Anchors = [akLeft, akTop, akRight]
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 2
  end
  object LE1: TLabeledEdit
    Left = 729
    Top = 8
    Width = 81
    Height = 22
    Anchors = [akTop, akRight]
    EditLabel.Width = 17
    EditLabel.Height = 15
    EditLabel.Caption = 'IP: '
    EditLabel.Font.Charset = RUSSIAN_CHARSET
    EditLabel.Font.Color = clWindowText
    EditLabel.Font.Height = -13
    EditLabel.Font.Name = 'Times New Roman'
    EditLabel.Font.Style = []
    EditLabel.ParentFont = False
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Times New Roman'
    Font.Style = []
    LabelPosition = lpLeft
    LabelSpacing = 3
    ParentFont = False
    TabOrder = 3
  end
  object LE2: TLabeledEdit
    Left = 849
    Top = 8
    Width = 57
    Height = 22
    Anchors = [akTop, akRight]
    EditLabel.Width = 28
    EditLabel.Height = 15
    EditLabel.Caption = 'Port: '
    EditLabel.Font.Charset = RUSSIAN_CHARSET
    EditLabel.Font.Color = clWindowText
    EditLabel.Font.Height = -13
    EditLabel.Font.Name = 'Times New Roman'
    EditLabel.Font.Style = []
    EditLabel.ParentFont = False
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Times New Roman'
    Font.Style = []
    LabelPosition = lpLeft
    LabelSpacing = 3
    ParentFont = False
    TabOrder = 4
    Text = '37111'
  end
  object CB1: TComboBox
    Left = 88
    Top = 8
    Width = 129
    Height = 23
    Style = csDropDownList
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clRed
    Font.Height = -13
    Font.Name = 'Times New Roman'
    Font.Style = []
    ItemHeight = 15
    ParentFont = False
    TabOrder = 5
  end
  object Button1: TButton
    Left = 16
    Top = 8
    Width = 65
    Height = 25
    Caption = 'BASES'
    TabOrder = 6
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 749
    Top = 576
    Width = 75
    Height = 25
    Anchors = [akRight, akBottom]
    Caption = 'Hide Serv'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 830
    Top = 576
    Width = 74
    Height = 25
    Anchors = [akRight, akBottom]
    Caption = 'Show Serv'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 16
    Top = 576
    Width = 75
    Height = 25
    Anchors = [akLeft, akBottom]
    Caption = 'OFF'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    TabOrder = 9
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 96
    Top = 576
    Width = 75
    Height = 25
    Anchors = [akLeft, akBottom]
    Caption = 'ON'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    TabOrder = 10
    OnClick = Button5Click
  end
  object CheckBox1: TCheckBox
    Left = 232
    Top = 0
    Width = 97
    Height = 17
    Caption = 'MyServer v2.0'
    Checked = True
    Enabled = False
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    State = cbChecked
    TabOrder = 11
  end
  object CheckBox2: TCheckBox
    Left = 232
    Top = 16
    Width = 129
    Height = 17
    Caption = 'Need Column Names'
    Checked = True
    Enabled = False
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    State = cbChecked
    TabOrder = 12
    OnClick = CheckBox2Click
  end
  object IdTCPClient1: TIdTCPClient
    Host = '127.0.0.1'
    Port = 37112
    Left = 16
    Top = 40
  end
  object TrayIcon1: TTrayIcon
    Hide = True
    RestoreOn = imDoubleClick
    PopupMenuOn = imNone
    Left = 56
    Top = 40
  end
end
