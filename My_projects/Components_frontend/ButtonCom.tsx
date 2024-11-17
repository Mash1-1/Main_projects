interface Props {
  buttonType?: "primary" | "secondary" | "danger" | "info";
  text: string;
  onClick: () => void;
}

const ButtonCom = ({ text, buttonType = "primary", onClick }: Props) => {
  return (
    <button type="button" className={"btn btn-" + buttonType} onClick={onClick}>
        {text}
    </button>
  );
};

export default ButtonCom;
